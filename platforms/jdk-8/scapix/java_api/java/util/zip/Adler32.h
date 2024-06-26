// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/zip/Checksum.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ADLER32_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ADLER32_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::zip { class Adler32; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::zip::Adler32>
{
	static constexpr fixed_string class_name = "java/util/zip/Adler32";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::zip::Checksum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ADLER32_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ADLER32)
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ADLER32

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::zip::Adler32 : public jni::object_base<"java/util/zip/Adler32",
	java::lang::Object,
	java::util::zip::Checksum>
{
public:

	static jni::ref<java::util::zip::Adler32> new_object() { return base_::new_object(); }
	void update(jint p1) { return call_method<"update", void>(p1); }
	void update(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"update", void>(p1, p2, p3); }
	void update(jni::ref<jni::array<jbyte>> p1) { return call_method<"update", void>(p1); }
	void update(jni::ref<java::nio::ByteBuffer> p1) { return call_method<"update", void>(p1); }
	void reset() { return call_method<"reset", void>(); }
	jlong getValue() { return call_method<"getValue", jlong>(); }

protected:

	Adler32(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ADLER32
