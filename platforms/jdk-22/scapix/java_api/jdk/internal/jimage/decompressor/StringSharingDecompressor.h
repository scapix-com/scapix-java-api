// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/jimage/decompressor/ResourceDecompressor.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_STRINGSHARINGDECOMPRESSOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_STRINGSHARINGDECOMPRESSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::jimage::decompressor { class StringSharingDecompressor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::jimage::decompressor::StringSharingDecompressor>
{
	static constexpr fixed_string class_name = "jdk/internal/jimage/decompressor/StringSharingDecompressor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::jimage::decompressor::ResourceDecompressor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_STRINGSHARINGDECOMPRESSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_STRINGSHARINGDECOMPRESSOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_STRINGSHARINGDECOMPRESSOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Properties.h>
#include <scapix/java_api/jdk/internal/jimage/decompressor/ResourceDecompressor_StringsProvider.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::jimage::decompressor::StringSharingDecompressor : public jni::object_base<"jdk/internal/jimage/decompressor/StringSharingDecompressor",
	java::lang::Object,
	jdk::internal::jimage::decompressor::ResourceDecompressor>
{
public:

	static jint EXTERNALIZED_STRING() { return get_static_field<"EXTERNALIZED_STRING", jint>(); }
	static jint EXTERNALIZED_STRING_DESCRIPTOR() { return get_static_field<"EXTERNALIZED_STRING_DESCRIPTOR", jint>(); }

	static jni::ref<jni::array<jint>> getSizes() { return call_static_method<"getSizes", jni::ref<jni::array<jint>>>(); }
	static jni::ref<jni::array<jbyte>> normalize(jni::ref<jdk::internal::jimage::decompressor::ResourceDecompressor_StringsProvider> provider, jni::ref<jni::array<jbyte>> transformed, jint offset) { return call_static_method<"normalize", jni::ref<jni::array<jbyte>>>(provider, transformed, offset); }
	static jni::ref<jni::array<jbyte>> getEncoded(jni::ref<java::lang::String> pre) { return call_static_method<"getEncoded", jni::ref<jni::array<jbyte>>>(pre); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	static jni::ref<jdk::internal::jimage::decompressor::StringSharingDecompressor> new_object(jni::ref<java::util::Properties> properties) { return base_::new_object(properties); }
	jni::ref<jni::array<jbyte>> decompress(jni::ref<jdk::internal::jimage::decompressor::ResourceDecompressor_StringsProvider> reader, jni::ref<jni::array<jbyte>> content, jint offset, jlong originalSize) { return call_method<"decompress", jni::ref<jni::array<jbyte>>>(reader, content, offset, originalSize); }

protected:

	StringSharingDecompressor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_DECOMPRESSOR_STRINGSHARINGDECOMPRESSOR
