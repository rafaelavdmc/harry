<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Guia de Hogwarts - Contato</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <header>
        <h1>Mundo de Harry Potter</h1>
        <nav>
            <ul>
                <li><a href="index.html">Início</a></li>
                <li><a href="about.html">Casas & Feitiços</a></li>
                <li><a href="contact.html">Contato</a></li>
            </ul>
        </nav>
    </header>

    <main>
        <section>
            <h2>Envie uma Coruja (Contato)</h2>
            
            <div class="alerta">
                <p><strong>Aviso:</strong> Este formulário é apenas uma demonstração. Nenhuma mensagem é salva ou enviada. Use dados fictícios!</p>
            </div>

            <form action="contact.html" method="get">
                <div class="campo">
                    <label for="nome">Nome:</label>
                    <input type="text" id="nome" name="nome" required>
                </div>

                <div class="campo">
                    <label for="email">E-mail:</label>
                    <input type="email" id="email" name="email" required>
                </div>

                <div class="campo">
                    <label for="mensagem">Mensagem:</label>
                    <textarea id="mensagem" name="mensagem" rows="4" required></textarea>
                </div>

                <button type="submit">Enviar Mensagem</button>
            </form>
        </section>
    </main>

    <footer>
        <p>&copy; 2026 Guia de Hogwarts - Projeto Fictício</p>
    </footer>
</body>
</html>
