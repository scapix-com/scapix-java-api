// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_SJIS_DECODEHOLDER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_SJIS_DECODEHOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class SJIS_DecodeHolder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::SJIS_DecodeHolder>
{
	static constexpr fixed_string class_name = "sun/nio/cs/SJIS$DecodeHolder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_SJIS_DECODEHOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_SJIS_DECODEHOLDER)
#define SCAPIX_JAVA_API_SUN_NIO_CS_SJIS_DECODEHOLDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::cs::SJIS_DecodeHolder : public jni::object_base<"sun/nio/cs/SJIS$DecodeHolder",
	java::lang::Object>
{
public:

	static jni::ref<jni::array<jni::array<jchar>>> b2c() { return get_static_field<"b2c", jni::ref<jni::array<jni::array<jchar>>>>(); }
	static jni::ref<jni::array<jchar>> b2cSB() { return get_static_field<"b2cSB", jni::ref<jni::array<jchar>>>(); }

	static jni::ref<sun::nio::cs::SJIS_DecodeHolder> new_object() { return base_::new_object(); }

protected:

	SJIS_DecodeHolder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_SJIS_DECODEHOLDER
