// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ZIP_CHECKSUM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_CHECKSUM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::zip { class Checksum; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::zip::Checksum>
{
	static constexpr fixed_string class_name = "java/util/zip/Checksum";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_CHECKSUM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ZIP_CHECKSUM)
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_CHECKSUM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::zip::Checksum : public jni::object_base<"java/util/zip/Checksum",
	java::lang::Object>
{
public:

	jlong getValue() { return call_method<"getValue", jlong>(); }
	void reset() { return call_method<"reset", void>(); }
	void update(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"update", void>(p1, p2, p3); }
	void update(jint p1) { return call_method<"update", void>(p1); }

protected:

	Checksum(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_CHECKSUM
