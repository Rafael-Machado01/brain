<?php

namespace Database\Seeders;

use Illuminate\Database\Console\Seeds\WithoutModelEvents;
use Illuminate\Database\Seeder;
use Illuminate\Support\Facades\DB;

class UsersTableSeeder extends Seeder
{
    /**
     * Run the database seeds.
     */
    public function run(): void
    {
        DB::table("users")->insert([
            "username" => "admin",
            "password" => bcrypt("admin"),
            "created_at" => now(),
        ],
        [
            "username"=> "rafa",
            "password"=> bcrypt("1804"),
             "created_at" => now(),
        ],
        );
    }
}
