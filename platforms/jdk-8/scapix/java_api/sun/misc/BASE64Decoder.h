// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/misc/CharacterDecoder.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_BASE64DECODER_FWD
#define SCAPIX_JAVA_API_SUN_MISC_BASE64DECODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class BASE64Decoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::BASE64Decoder>
{
	static constexpr fixed_string class_name = "sun/misc/BASE64Decoder";
	using base_classes = std::tuple<scapix::java_api::sun::misc::CharacterDecoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_BASE64DECODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_BASE64DECODER)
#define SCAPIX_JAVA_API_SUN_MISC_BASE64DECODER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::BASE64Decoder : public jni::object_base<"sun/misc/BASE64Decoder",
	sun::misc::CharacterDecoder>
{
public:

	static jni::ref<sun::misc::BASE64Decoder> new_object() { return base_::new_object(); }

protected:

	BASE64Decoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_BASE64DECODER
