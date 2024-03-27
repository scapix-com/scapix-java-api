// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/font/PhysicalStrike.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_NATIVESTRIKE_FWD
#define SCAPIX_JAVA_API_SUN_FONT_NATIVESTRIKE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class NativeStrike; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::NativeStrike>
{
	static constexpr fixed_string class_name = "sun/font/NativeStrike";
	using base_classes = std::tuple<scapix::java_api::sun::font::PhysicalStrike>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_NATIVESTRIKE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_NATIVESTRIKE)
#define SCAPIX_JAVA_API_SUN_FONT_NATIVESTRIKE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::NativeStrike : public jni::object_base<"sun/font/NativeStrike",
	sun::font::PhysicalStrike>
{
public:


protected:

	NativeStrike(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_NATIVESTRIKE