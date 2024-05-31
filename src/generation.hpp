#pragma once

class Generator{
public:
    inline explicit Generator(NodeExit root)
    : m_root (std::move(root))
    {

    }

    [[nodiscard]] std::string generate() const {
        
    }

private:
    const NodeExit m_root
};