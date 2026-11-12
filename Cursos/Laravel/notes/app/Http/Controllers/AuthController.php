<?php

namespace App\Http\Controllers;

use App\Models\User;   
use Illuminate\Http\Request;
use Illuminate\Support\Facades\DB;

class AuthController extends Controller
{
    public function Login() {
       return view('login');
    }
    public function LoginSubmit(Request $request) {
        echo 'Login Submit';

        // $request->validate([
        //     'text_username' => 'required',
        //     'text_password' => 'required|min:6|max:16',
        // ],
        // [
        //     'text_username.required' => 'O username é obrigatório',
        //     'text_username.email' => 'O email deve ser válido',
        //     'text_password.required' => "A senha é obrigatória",
        //     'text_password.min' => "A senha deve ter conter pelo menos :min caracteres",
        //     "text_password" => "A senha deve conter no maximo :max caracteres",
        // ]
        // );

        $username = $request->input('text_username'); 
        $password = $request->input('text_password');

        // try {
        //     DB::connection()->getPdo();
        //     echo "Conexão com o banco de dados bem sucedida!";
        // }catch (\PDOException $e) {
        //     echo "Erro ao conectar com o banco de dados: " . $e->getMessage();
        // }
        
        // Get all users from the database
        // $userModel = new User();
        // $users = $userModel->getAllUsers();

        // print_r($users);

        $user = User::where('username', $username)->where('deleted_at', null)->first();
        echo "<pre>";
        print_r($user);

        if(!$user) {
            return redirect()->back()->withInput()->with('LoginError', 'Usuário ou senha não encontrado!');
        }

        if(!password_verify($password, $user->password)) {
            return redirect()->back()->withInput()->with('LoginError', 'Usuário ou senha não encontrado!');
        }

        // last login

        $user->lastLogin = date(now());
        $user->save();

        // session user
        session(['user' => ['id' => $user->id, 'username' => $user->username]]);
        
        return redirect("/");


    }
    public function Logout() {
        session()->forget('user');
        return redirect()->to('/login');
    }
}
