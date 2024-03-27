// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_CLASSFILEDUMPER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_CLASSFILEDUMPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::util { class ClassFileDumper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::util::ClassFileDumper>
{
	static constexpr fixed_string class_name = "jdk/internal/util/ClassFileDumper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_CLASSFILEDUMPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_CLASSFILEDUMPER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_CLASSFILEDUMPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::util::ClassFileDumper : public jni::object_base<"jdk/internal/util/ClassFileDumper",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::util::ClassFileDumper> getInstance(jni::ref<java::lang::String> key, jni::ref<java::lang::String> path) { return call_static_method<"getInstance", jni::ref<jdk::internal::util::ClassFileDumper>>(key, path); }
	jni::ref<java::lang::String> key() { return call_method<"key", jni::ref<java::lang::String>>(); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }
	void dumpClass(jni::ref<java::lang::String> name, jni::ref<java::lang::Class> c, jni::ref<jni::array<jbyte>> bytes) { return call_method<"dumpClass", void>(name, c, bytes); }
	void dumpFailedClass(jni::ref<java::lang::String> name, jni::ref<jni::array<jbyte>> bytes) { return call_method<"dumpFailedClass", void>(name, bytes); }

protected:

	ClassFileDumper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_CLASSFILEDUMPER
