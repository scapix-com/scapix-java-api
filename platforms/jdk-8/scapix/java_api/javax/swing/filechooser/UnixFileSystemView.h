// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/filechooser/FileSystemView.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_UNIXFILESYSTEMVIEW_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_UNIXFILESYSTEMVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::filechooser { class UnixFileSystemView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::filechooser::UnixFileSystemView>
{
	static constexpr fixed_string class_name = "javax/swing/filechooser/UnixFileSystemView";
	using base_classes = std::tuple<scapix::java_api::javax::swing::filechooser::FileSystemView>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_UNIXFILESYSTEMVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_UNIXFILESYSTEMVIEW)
#define SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_UNIXFILESYSTEMVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::filechooser::UnixFileSystemView : public jni::object_base<"javax/swing/filechooser/UnixFileSystemView",
	javax::swing::filechooser::FileSystemView>
{
public:

	jni::ref<java::io::File> createNewFolder(jni::ref<java::io::File> p1) { return call_method<"createNewFolder", jni::ref<java::io::File>>(p1); }
	jboolean isFileSystemRoot(jni::ref<java::io::File> p1) { return call_method<"isFileSystemRoot", jboolean>(p1); }
	jboolean isDrive(jni::ref<java::io::File> p1) { return call_method<"isDrive", jboolean>(p1); }
	jboolean isFloppyDrive(jni::ref<java::io::File> p1) { return call_method<"isFloppyDrive", jboolean>(p1); }
	jboolean isComputerNode(jni::ref<java::io::File> p1) { return call_method<"isComputerNode", jboolean>(p1); }

protected:

	UnixFileSystemView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_UNIXFILESYSTEMVIEW
