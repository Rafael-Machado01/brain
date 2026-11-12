<?php

namespace App\Http\Controllers;

use App\Models\Note;
use App\Models\User;
use App\Services\Operations;
use Illuminate\Http\Request;


class MainController extends Controller
{
    public function index()
    {
        $id = session('user.id');

        $user = User::findOrFail($id);
        $notes = $user->notes()->get()->toArray();

        return view('home', ['notes' => $notes]);
    }

    public function editNote($id)
    {
        $noteId = Operations::decryptId($id);
 $note = Note::find($noteId);

        return view('edit_note', ['note' => $note]);
    }

    public function deleteNote($id)
    {
        $noteId = Operations::decryptId($id);

    }

    public function newNote()
    {
        return view('new_note');
    }
    public function newNoteSubmit(Request $request) {
    echo "Estou criando uma nova nota";
    $request->validate([
        "text_title" => "required|min:3|max:255",
        "text_note" => "required|min:3|max:3000",
    ], [
        "text_title.required" => "O título é obrigatório",
        "text_title.min" => "O título deve conter pelo menos :min caracteres",
        "text_title.max" => "O título deve conter no máximo :max caracteres",
        "text_note.required" => "A nota é obrigatória",
        "text_note.min" => "A nota deve conter pelo menos :min caracteres",
        "text_note.max" => "A nota deve conter no máximo :max caracteres",
    ]);

    $id = session("user.id");

    $note = new Note();
    $note->user_id = $id;
    $note->title = $request->text_title;
    $note->text = $request->text_note;

    $note->save();

    return redirect()->route("home");
    }

    public function editNoteSubmit($id){
        return view('edit_note', ['id' => $id]);
    }
}
