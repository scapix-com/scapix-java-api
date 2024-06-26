// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_FILEFILTER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_FILEFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::filechooser { class FileFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::filechooser::FileFilter>
{
	static constexpr fixed_string class_name = "javax/swing/filechooser/FileFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_FILEFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_FILEFILTER)
#define SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_FILEFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::filechooser::FileFilter : public jni::object_base<"javax/swing/filechooser/FileFilter",
	java::lang::Object>
{
public:

	static jni::ref<javax::swing::filechooser::FileFilter> new_object() { return base_::new_object(); }
	jboolean accept(jni::ref<java::io::File> p1) { return call_method<"accept", jboolean>(p1); }
	jni::ref<java::lang::String> getDescription() { return call_method<"getDescription", jni::ref<java::lang::String>>(); }

protected:

	FileFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_FILECHOOSER_FILEFILTER
