// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/FilenameFilter.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_JARFILTER_FWD
#define SCAPIX_JAVA_API_SUN_MISC_JARFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class JarFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::JarFilter>
{
	static constexpr fixed_string class_name = "sun/misc/JarFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::FilenameFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_JARFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_JARFILTER)
#define SCAPIX_JAVA_API_SUN_MISC_JARFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::JarFilter : public jni::object_base<"sun/misc/JarFilter",
	java::lang::Object,
	java::io::FilenameFilter>
{
public:

	static jni::ref<sun::misc::JarFilter> new_object() { return base_::new_object(); }
	jboolean accept(jni::ref<java::io::File> p1, jni::ref<java::lang::String> p2) { return call_method<"accept", jboolean>(p1, p2); }

protected:

	JarFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_JARFILTER
