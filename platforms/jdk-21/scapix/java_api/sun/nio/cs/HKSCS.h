// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_HKSCS_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_HKSCS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class HKSCS; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::HKSCS>
{
	static constexpr fixed_string class_name = "sun/nio/cs/HKSCS";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_HKSCS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_HKSCS)
#define SCAPIX_JAVA_API_SUN_NIO_CS_HKSCS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/nio/cs/HKSCS_Encoder.h>
#include <scapix/java_api/sun/nio/cs/HKSCS_Decoder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::cs::HKSCS : public jni::object_base<"sun/nio/cs/HKSCS",
	java::lang::Object>
{
public:

	using Encoder = HKSCS_Encoder;
	using Decoder = HKSCS_Decoder;

	static jni::ref<sun::nio::cs::HKSCS> new_object() { return base_::new_object(); }

protected:

	HKSCS(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_HKSCS
