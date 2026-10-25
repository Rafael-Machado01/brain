<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;

class AuthController extends Controller
{
    public function Login() {
       return view('login');
    }
    public function LoginSubmit(Request $request) {
        echo 'Login Submit';

        $request->validate([
            'text_username' => 'required|email',
            'text_password' => 'required|min:6|max:16',
        ],
        [
            'text_username.required' => 'O email é obrigatório',
            'text_username.email' => 'O email deve ser válido',
            'text_password.required' => "A senha é obrigatória",
            'text_password.min' => "A senha deve ter conter pelo menos :min caracteres",
            "text_password" => "A senha deve conter no maximo :max caracteres",
        ]
        );

        $username = $request->input('text_username'); 
        $password = $request->input('text_password');
        
    }
    public function Logout() {
        echo "Logout";
    }
}
