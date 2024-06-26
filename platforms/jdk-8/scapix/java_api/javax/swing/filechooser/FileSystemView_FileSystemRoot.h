// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/File.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_FILESYSTEMVIEW_FILESYSTEMROOT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_FILESYSTEMVIEW_FILESYSTEMROOT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::filechooser { class FileSystemView_FileSystemRoot; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::filechooser::FileSystemView_FileSystemRoot>
{
	static constexpr fixed_string class_name = "javax/swing/filechooser/FileSystemView$FileSystemRoot";
	using base_classes = std::tuple<scapix::java_api::java::io::File>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_FILESYSTEMVIEW_FILESYSTEMROOT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_FILESYSTEMVIEW_FILESYSTEMROOT)
#define SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_FILESYSTEMVIEW_FILESYSTEMROOT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::filechooser::FileSystemView_FileSystemRoot : public jni::object_base<"javax/swing/filechooser/FileSystemView$FileSystemRoot",
	java::io::File>
{
public:

	static jni::ref<javax::swing::filechooser::FileSystemView_FileSystemRoot> new_object(jni::ref<java::io::File> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::filechooser::FileSystemView_FileSystemRoot> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jboolean isDirectory() { return call_method<"isDirectory", jboolean>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	FileSystemView_FileSystemRoot(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_FILESYSTEMVIEW_FILESYSTEMROOT
