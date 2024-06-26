// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/jimage/ImageStrings.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_IMAGESTRINGSREADER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_IMAGESTRINGSREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::jimage { class ImageStringsReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::jimage::ImageStringsReader>
{
	static constexpr fixed_string class_name = "jdk/internal/jimage/ImageStringsReader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::jimage::ImageStrings>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_IMAGESTRINGSREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_IMAGESTRINGSREADER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_IMAGESTRINGSREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::jimage::ImageStringsReader : public jni::object_base<"jdk/internal/jimage/ImageStringsReader",
	java::lang::Object,
	jdk::internal::jimage::ImageStrings>
{
public:

	static jint HASH_MULTIPLIER() { return get_static_field<"HASH_MULTIPLIER", jint>(); }
	static jint POSITIVE_MASK() { return get_static_field<"POSITIVE_MASK", jint>(); }

	jni::ref<java::lang::String> get(jint offset) { return call_method<"get", jni::ref<java::lang::String>>(offset); }
	jint match(jint offset, jni::ref<java::lang::String> string, jint stringOffset) { return call_method<"match", jint>(offset, string, stringOffset); }
	jint add(jni::ref<java::lang::String> string) { return call_method<"add", jint>(string); }
	static jint hashCode(jni::ref<java::lang::String> s) { return call_static_method<"hashCode", jint>(s); }
	static jint hashCode(jni::ref<java::lang::String> s, jint seed) { return call_static_method<"hashCode", jint>(s, seed); }
	static jint hashCode(jni::ref<java::lang::String> module, jni::ref<java::lang::String> name) { return call_static_method<"hashCode", jint>(module, name); }
	static jint hashCode(jni::ref<java::lang::String> module, jni::ref<java::lang::String> name, jint seed) { return call_static_method<"hashCode", jint>(module, name, seed); }
	static jint unmaskedHashCode(jni::ref<java::lang::String> s, jint seed) { return call_static_method<"unmaskedHashCode", jint>(s, seed); }
	static jni::ref<java::lang::String> stringFromMUTF8(jni::ref<jni::array<jbyte>> bytes, jint offset, jint count) { return call_static_method<"stringFromMUTF8", jni::ref<java::lang::String>>(bytes, offset, count); }
	static jni::ref<java::lang::String> stringFromMUTF8(jni::ref<jni::array<jbyte>> bytes) { return call_static_method<"stringFromMUTF8", jni::ref<java::lang::String>>(bytes); }
	static jni::ref<java::lang::String> stringFromByteBuffer(jni::ref<java::nio::ByteBuffer> buffer) { return call_static_method<"stringFromByteBuffer", jni::ref<java::lang::String>>(buffer); }
	static jni::ref<jni::array<jbyte>> mutf8FromString(jni::ref<java::lang::String> string) { return call_static_method<"mutf8FromString", jni::ref<jni::array<jbyte>>>(string); }

protected:

	ImageStringsReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_IMAGESTRINGSREADER
