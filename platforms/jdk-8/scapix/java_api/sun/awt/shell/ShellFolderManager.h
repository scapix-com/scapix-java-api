// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_SHELL_SHELLFOLDERMANAGER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_SHELL_SHELLFOLDERMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::shell { class ShellFolderManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::shell::ShellFolderManager>
{
	static constexpr fixed_string class_name = "sun/awt/shell/ShellFolderManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_SHELL_SHELLFOLDERMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_SHELL_SHELLFOLDERMANAGER)
#define SCAPIX_JAVA_API_SUN_AWT_SHELL_SHELLFOLDERMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/awt/shell/ShellFolder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::shell::ShellFolderManager : public jni::object_base<"sun/awt/shell/ShellFolderManager",
	java::lang::Object>
{
public:

	jni::ref<sun::awt::shell::ShellFolder> createShellFolder(jni::ref<java::io::File> p1) { return call_method<"createShellFolder", jni::ref<sun::awt::shell::ShellFolder>>(p1); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::String> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jboolean isComputerNode(jni::ref<java::io::File> p1) { return call_method<"isComputerNode", jboolean>(p1); }
	jboolean isFileSystemRoot(jni::ref<java::io::File> p1) { return call_method<"isFileSystemRoot", jboolean>(p1); }

protected:

	ShellFolderManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_SHELL_SHELLFOLDERMANAGER