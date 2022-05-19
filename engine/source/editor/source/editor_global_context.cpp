#include <array>
#include <chrono>
#include <fstream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <map>
#include <mutex>
#include <optional>
#include <unordered_map>
#include <vector>

#include "editor/include/editor_global_context.h"

#include "editor/include/editor_scene_manager.h"


namespace Pilot
{
    EditorGlobalContext g_editor_global_context;

    void EditorGlobalContext::initialize()
    {
        m_scene_manager = new EditorSceneManager();
        m_scene_manager->initialize();
    }

    void EditorGlobalContext::clear()
    {
        delete(m_scene_manager);
    }
}