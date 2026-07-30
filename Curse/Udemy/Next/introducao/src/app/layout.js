import Footer from "@/components/Footer";

export default function RootLayout({ children }) {
  return (
    <html
      lang="en">
    <h1>Header padrão</h1>
      <body>{children}</body>
    <Footer />
    </html>
  );
}
