// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/shell/ShellFolder.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_SHELL_WIN32SHELLFOLDER2_FWD
#define SCAPIX_JAVA_API_SUN_AWT_SHELL_WIN32SHELLFOLDER2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::shell { class Win32ShellFolder2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::shell::Win32ShellFolder2>
{
	static constexpr fixed_string class_name = "sun/awt/shell/Win32ShellFolder2";
	using base_classes = std::tuple<scapix::java_api::sun::awt::shell::ShellFolder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_SHELL_WIN32SHELLFOLDER2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_SHELL_WIN32SHELLFOLDER2)
#define SCAPIX_JAVA_API_SUN_AWT_SHELL_WIN32SHELLFOLDER2

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Image.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/sun/awt/shell/ShellFolderColumnInfo.h>
#include <scapix/java_api/sun/awt/shell/Win32ShellFolder2_SystemIcon.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::shell::Win32ShellFolder2 : public jni::object_base<"sun/awt/shell/Win32ShellFolder2",
	sun::awt::shell::ShellFolder>
{
public:

	using SystemIcon = Win32ShellFolder2_SystemIcon;

	static jint DESKTOP() { return get_static_field<"DESKTOP", jint>(); }
	static jint INTERNET() { return get_static_field<"INTERNET", jint>(); }
	static jint PROGRAMS() { return get_static_field<"PROGRAMS", jint>(); }
	static jint CONTROLS() { return get_static_field<"CONTROLS", jint>(); }
	static jint PRINTERS() { return get_static_field<"PRINTERS", jint>(); }
	static jint PERSONAL() { return get_static_field<"PERSONAL", jint>(); }
	static jint FAVORITES() { return get_static_field<"FAVORITES", jint>(); }
	static jint STARTUP() { return get_static_field<"STARTUP", jint>(); }
	static jint RECENT() { return get_static_field<"RECENT", jint>(); }
	static jint SENDTO() { return get_static_field<"SENDTO", jint>(); }
	static jint BITBUCKET() { return get_static_field<"BITBUCKET", jint>(); }
	static jint STARTMENU() { return get_static_field<"STARTMENU", jint>(); }
	static jint DESKTOPDIRECTORY() { return get_static_field<"DESKTOPDIRECTORY", jint>(); }
	static jint DRIVES() { return get_static_field<"DRIVES", jint>(); }
	static jint NETWORK() { return get_static_field<"NETWORK", jint>(); }
	static jint NETHOOD() { return get_static_field<"NETHOOD", jint>(); }
	static jint FONTS() { return get_static_field<"FONTS", jint>(); }
	static jint TEMPLATES() { return get_static_field<"TEMPLATES", jint>(); }
	static jint COMMON_STARTMENU() { return get_static_field<"COMMON_STARTMENU", jint>(); }
	static jint COMMON_PROGRAMS() { return get_static_field<"COMMON_PROGRAMS", jint>(); }
	static jint COMMON_STARTUP() { return get_static_field<"COMMON_STARTUP", jint>(); }
	static jint COMMON_DESKTOPDIRECTORY() { return get_static_field<"COMMON_DESKTOPDIRECTORY", jint>(); }
	static jint APPDATA() { return get_static_field<"APPDATA", jint>(); }
	static jint PRINTHOOD() { return get_static_field<"PRINTHOOD", jint>(); }
	static jint ALTSTARTUP() { return get_static_field<"ALTSTARTUP", jint>(); }
	static jint COMMON_ALTSTARTUP() { return get_static_field<"COMMON_ALTSTARTUP", jint>(); }
	static jint COMMON_FAVORITES() { return get_static_field<"COMMON_FAVORITES", jint>(); }
	static jint INTERNET_CACHE() { return get_static_field<"INTERNET_CACHE", jint>(); }
	static jint COOKIES() { return get_static_field<"COOKIES", jint>(); }
	static jint HISTORY() { return get_static_field<"HISTORY", jint>(); }
	static jint ATTRIB_CANCOPY() { return get_static_field<"ATTRIB_CANCOPY", jint>(); }
	static jint ATTRIB_CANMOVE() { return get_static_field<"ATTRIB_CANMOVE", jint>(); }
	static jint ATTRIB_CANLINK() { return get_static_field<"ATTRIB_CANLINK", jint>(); }
	static jint ATTRIB_CANRENAME() { return get_static_field<"ATTRIB_CANRENAME", jint>(); }
	static jint ATTRIB_CANDELETE() { return get_static_field<"ATTRIB_CANDELETE", jint>(); }
	static jint ATTRIB_HASPROPSHEET() { return get_static_field<"ATTRIB_HASPROPSHEET", jint>(); }
	static jint ATTRIB_DROPTARGET() { return get_static_field<"ATTRIB_DROPTARGET", jint>(); }
	static jint ATTRIB_LINK() { return get_static_field<"ATTRIB_LINK", jint>(); }
	static jint ATTRIB_SHARE() { return get_static_field<"ATTRIB_SHARE", jint>(); }
	static jint ATTRIB_READONLY() { return get_static_field<"ATTRIB_READONLY", jint>(); }
	static jint ATTRIB_GHOSTED() { return get_static_field<"ATTRIB_GHOSTED", jint>(); }
	static jint ATTRIB_HIDDEN() { return get_static_field<"ATTRIB_HIDDEN", jint>(); }
	static jint ATTRIB_FILESYSANCESTOR() { return get_static_field<"ATTRIB_FILESYSANCESTOR", jint>(); }
	static jint ATTRIB_FOLDER() { return get_static_field<"ATTRIB_FOLDER", jint>(); }
	static jint ATTRIB_FILESYSTEM() { return get_static_field<"ATTRIB_FILESYSTEM", jint>(); }
	static jint ATTRIB_HASSUBFOLDER() { return get_static_field<"ATTRIB_HASSUBFOLDER", jint>(); }
	static jint ATTRIB_VALIDATE() { return get_static_field<"ATTRIB_VALIDATE", jint>(); }
	static jint ATTRIB_REMOVABLE() { return get_static_field<"ATTRIB_REMOVABLE", jint>(); }
	static jint ATTRIB_COMPRESSED() { return get_static_field<"ATTRIB_COMPRESSED", jint>(); }
	static jint ATTRIB_BROWSABLE() { return get_static_field<"ATTRIB_BROWSABLE", jint>(); }
	static jint ATTRIB_NONENUMERATED() { return get_static_field<"ATTRIB_NONENUMERATED", jint>(); }
	static jint ATTRIB_NEWCONTENT() { return get_static_field<"ATTRIB_NEWCONTENT", jint>(); }
	static jint SHGDN_NORMAL() { return get_static_field<"SHGDN_NORMAL", jint>(); }
	static jint SHGDN_INFOLDER() { return get_static_field<"SHGDN_INFOLDER", jint>(); }
	static jint SHGDN_INCLUDE_NONFILESYS() { return get_static_field<"SHGDN_INCLUDE_NONFILESYS", jint>(); }
	static jint SHGDN_FORADDRESSBAR() { return get_static_field<"SHGDN_FORADDRESSBAR", jint>(); }
	static jint SHGDN_FORPARSING() { return get_static_field<"SHGDN_FORPARSING", jint>(); }

	void setIsPersonal() { return call_method<"setIsPersonal", void>(); }
	jlong getParentIShellFolder() { return call_method<"getParentIShellFolder", jlong>(); }
	jlong getRelativePIDL() { return call_method<"getRelativePIDL", jlong>(); }
	jni::ref<sun::awt::shell::Win32ShellFolder2> getDesktop() { return call_method<"getDesktop", jni::ref<sun::awt::shell::Win32ShellFolder2>>(); }
	jlong getDesktopIShellFolder() { return call_method<"getDesktopIShellFolder", jlong>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean isFileSystem() { return call_method<"isFileSystem", jboolean>(); }
	jboolean hasAttribute(jint p1) { return call_method<"hasAttribute", jboolean>(p1); }
	jni::ref<java::io::File> getParentFile() { return call_method<"getParentFile", jni::ref<java::io::File>>(); }
	jboolean isDirectory() { return call_method<"isDirectory", jboolean>(); }
	jni::ref<jni::array<java::io::File>> listFiles(jboolean p1) { return call_method<"listFiles", jni::ref<jni::array<java::io::File>>>(p1); }
	jboolean isLink() { return call_method<"isLink", jboolean>(); }
	jboolean isHidden() { return call_method<"isHidden", jboolean>(); }
	jni::ref<sun::awt::shell::ShellFolder> getLinkLocation() { return call_method<"getLinkLocation", jni::ref<sun::awt::shell::ShellFolder>>(); }
	jni::ref<java::lang::String> getDisplayName() { return call_method<"getDisplayName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getFolderType() { return call_method<"getFolderType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getExecutableType() { return call_method<"getExecutableType", jni::ref<java::lang::String>>(); }
	jni::ref<java::awt::Image> getIcon(jboolean p1) { return call_method<"getIcon", jni::ref<java::awt::Image>>(p1); }
	jni::ref<java::io::File> getCanonicalFile() { return call_method<"getCanonicalFile", jni::ref<java::io::File>>(); }
	jboolean isSpecial() { return call_method<"isSpecial", jboolean>(); }
	jint compareTo(jni::ref<java::io::File> p1) { return call_method<"compareTo", jint>(p1); }
	jni::ref<jni::array<sun::awt::shell::ShellFolderColumnInfo>> getFolderColumns() { return call_method<"getFolderColumns", jni::ref<jni::array<sun::awt::shell::ShellFolderColumnInfo>>>(); }
	jni::ref<java::lang::Object> getFolderColumnValue(jint p1) { return call_method<"getFolderColumnValue", jni::ref<java::lang::Object>>(p1); }
	void sortChildren(jni::ref<java::util::List> p1) { return call_method<"sortChildren", void>(p1); }

protected:

	Win32ShellFolder2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_SHELL_WIN32SHELLFOLDER2
