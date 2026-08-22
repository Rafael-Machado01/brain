const express = require("express");
const ejs = require("ejs");
const mongoose = require("mongoose");

const app = express();

app.use(express.static("public"));
app.set("view engine", "ejs");
app.use(express.urlencoded({ extended: true }));

mongoose.connect("mongodb://localhost:27017/userDB");

const userSchema = {
  email: String,
  password: String,
};

const User = mongoose.model("User", userSchema);

app.get("/", (req, res) => {
  res.render("home");
});

app.get("/login", (req, res) => {
  res.render("login");
});

app.get("/register", (req, res) => {
  res.render("register");
});

app.post("/register", (req, res) => {
  const newUser = new User({
    email: req.body.username,
    password: req.body.password,
  });
  newUser.save();
  res.render("secrets");
});

app.post("/login", async (req, res) => {
  const userName = req.body.username;
  const userPassword = req.body.password;

  try {
    const resultUser = await User.findOne({ email: userName }).exec();
    if (resultUser) {
      res.render("secrets");
    } else {
      res.send("<h2>Credenciais inválidas</h2>");
    }
  } catch (error) {
    console.log("Erro:", error);
  }
});

app.listen(4000, () => {
  console.log("Servidor Rodando na porta 4000");
});
