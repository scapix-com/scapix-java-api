// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSLOADER_NATIVELIBRARY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSLOADER_NATIVELIBRARY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ClassLoader_NativeLibrary; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ClassLoader_NativeLibrary>
{
	static constexpr fixed_string class_name = "java/lang/ClassLoader$NativeLibrary";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSLOADER_NATIVELIBRARY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSLOADER_NATIVELIBRARY)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSLOADER_NATIVELIBRARY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::ClassLoader_NativeLibrary : public jni::object_base<"java/lang/ClassLoader$NativeLibrary",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::ClassLoader_NativeLibrary> new_object(jni::ref<java::lang::Class> p1, jni::ref<java::lang::String> p2, jboolean p3) { return base_::new_object(p1, p2, p3); }

protected:

	ClassLoader_NativeLibrary(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSLOADER_NATIVELIBRARY
