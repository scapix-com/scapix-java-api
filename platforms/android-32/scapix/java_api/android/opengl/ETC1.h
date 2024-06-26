// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OPENGL_ETC1_FWD
#define SCAPIX_JAVA_API_ANDROID_OPENGL_ETC1_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::opengl { class ETC1; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::opengl::ETC1>
{
	static constexpr fixed_string class_name = "android/opengl/ETC1";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OPENGL_ETC1_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OPENGL_ETC1)
#define SCAPIX_JAVA_API_ANDROID_OPENGL_ETC1

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/Buffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::opengl::ETC1 : public jni::object_base<"android/opengl/ETC1",
	java::lang::Object>
{
public:

	static jint DECODED_BLOCK_SIZE() { return get_static_field<"DECODED_BLOCK_SIZE", jint>(); }
	static jint ENCODED_BLOCK_SIZE() { return get_static_field<"ENCODED_BLOCK_SIZE", jint>(); }
	static jint ETC1_RGB8_OES() { return get_static_field<"ETC1_RGB8_OES", jint>(); }
	static jint ETC_PKM_HEADER_SIZE() { return get_static_field<"ETC_PKM_HEADER_SIZE", jint>(); }

	static jni::ref<android::opengl::ETC1> new_object() { return base_::new_object(); }
	static void encodeBlock(jni::ref<java::nio::Buffer> p1, jint p2, jni::ref<java::nio::Buffer> p3) { return call_static_method<"encodeBlock", void>(p1, p2, p3); }
	static void decodeBlock(jni::ref<java::nio::Buffer> p1, jni::ref<java::nio::Buffer> p2) { return call_static_method<"decodeBlock", void>(p1, p2); }
	static jint getEncodedDataSize(jint p1, jint p2) { return call_static_method<"getEncodedDataSize", jint>(p1, p2); }
	static void encodeImage(jni::ref<java::nio::Buffer> p1, jint p2, jint p3, jint p4, jint p5, jni::ref<java::nio::Buffer> p6) { return call_static_method<"encodeImage", void>(p1, p2, p3, p4, p5, p6); }
	static void decodeImage(jni::ref<java::nio::Buffer> p1, jni::ref<java::nio::Buffer> p2, jint p3, jint p4, jint p5, jint p6) { return call_static_method<"decodeImage", void>(p1, p2, p3, p4, p5, p6); }
	static void formatHeader(jni::ref<java::nio::Buffer> p1, jint p2, jint p3) { return call_static_method<"formatHeader", void>(p1, p2, p3); }
	static jboolean isValid(jni::ref<java::nio::Buffer> p1) { return call_static_method<"isValid", jboolean>(p1); }
	static jint getWidth(jni::ref<java::nio::Buffer> p1) { return call_static_method<"getWidth", jint>(p1); }
	static jint getHeight(jni::ref<java::nio::Buffer> p1) { return call_static_method<"getHeight", jint>(p1); }

protected:

	ETC1(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OPENGL_ETC1
