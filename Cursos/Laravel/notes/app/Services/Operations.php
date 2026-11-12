<?php

namespace App\Services;

class Operations
{

   public static function decryptId($id) {
        try {
            $newId = \Illuminate\Support\Facades\Crypt::decrypt($id);
        }catch (\Illuminate\Contracts\Encryption\DecryptException $e) {
            return redirect()->route("home");
        }
        return $newId;
    }
}
