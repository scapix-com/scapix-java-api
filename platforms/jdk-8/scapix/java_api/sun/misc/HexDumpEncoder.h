// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/misc/CharacterEncoder.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_HEXDUMPENCODER_FWD
#define SCAPIX_JAVA_API_SUN_MISC_HEXDUMPENCODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class HexDumpEncoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::HexDumpEncoder>
{
	static constexpr fixed_string class_name = "sun/misc/HexDumpEncoder";
	using base_classes = std::tuple<scapix::java_api::sun::misc::CharacterEncoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_HEXDUMPENCODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_HEXDUMPENCODER)
#define SCAPIX_JAVA_API_SUN_MISC_HEXDUMPENCODER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::HexDumpEncoder : public jni::object_base<"sun/misc/HexDumpEncoder",
	sun::misc::CharacterEncoder>
{
public:

	static jni::ref<sun::misc::HexDumpEncoder> new_object() { return base_::new_object(); }

protected:

	HexDumpEncoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_HEXDUMPENCODER