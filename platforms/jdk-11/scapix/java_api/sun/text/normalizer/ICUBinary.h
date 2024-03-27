// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_ICUBINARY_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_ICUBINARY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::normalizer { class ICUBinary; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::normalizer::ICUBinary>
{
	static constexpr fixed_string class_name = "sun/text/normalizer/ICUBinary";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_ICUBINARY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_ICUBINARY)
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_ICUBINARY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/sun/text/normalizer/ICUBinary_Authenticate.h>
#include <scapix/java_api/sun/text/normalizer/VersionInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::text::normalizer::ICUBinary : public jni::object_base<"sun/text/normalizer/ICUBinary",
	java::lang::Object>
{
public:

	using Authenticate = ICUBinary_Authenticate;

	static jni::ref<sun::text::normalizer::ICUBinary> new_object() { return base_::new_object(); }
	static jni::ref<java::nio::ByteBuffer> getRequiredData(jni::ref<java::lang::String> itemPath) { return call_static_method<"getRequiredData", jni::ref<java::nio::ByteBuffer>>(itemPath); }
	static jni::ref<sun::text::normalizer::VersionInfo> readHeaderAndDataVersion(jni::ref<java::nio::ByteBuffer> bytes, jint dataFormat, jni::ref<sun::text::normalizer::ICUBinary_Authenticate> authenticate) { return call_static_method<"readHeaderAndDataVersion", jni::ref<sun::text::normalizer::VersionInfo>>(bytes, dataFormat, authenticate); }
	static jni::ref<jni::array<jbyte>> readHeader(jni::ref<java::io::InputStream> inputStream, jni::ref<jni::array<jbyte>> dataFormatIDExpected, jni::ref<sun::text::normalizer::ICUBinary_Authenticate> authenticate) { return call_static_method<"readHeader", jni::ref<jni::array<jbyte>>>(inputStream, dataFormatIDExpected, authenticate); }
	static jint readHeader(jni::ref<java::nio::ByteBuffer> bytes, jint dataFormat, jni::ref<sun::text::normalizer::ICUBinary_Authenticate> authenticate) { return call_static_method<"readHeader", jint>(bytes, dataFormat, authenticate); }
	static void skipBytes(jni::ref<java::nio::ByteBuffer> bytes, jint skipLength) { return call_static_method<"skipBytes", void>(bytes, skipLength); }
	static jni::ref<sun::text::normalizer::VersionInfo> getVersionInfoFromCompactInt(jint version) { return call_static_method<"getVersionInfoFromCompactInt", jni::ref<sun::text::normalizer::VersionInfo>>(version); }

protected:

	ICUBinary(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_ICUBINARY
