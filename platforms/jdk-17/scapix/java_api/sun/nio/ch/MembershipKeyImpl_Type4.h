// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/nio/ch/MembershipKeyImpl.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_MEMBERSHIPKEYIMPL_TYPE4_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_MEMBERSHIPKEYIMPL_TYPE4_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class MembershipKeyImpl_Type4; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::MembershipKeyImpl_Type4>
{
	static constexpr fixed_string class_name = "sun/nio/ch/MembershipKeyImpl$Type4";
	using base_classes = std::tuple<scapix::java_api::sun::nio::ch::MembershipKeyImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_MEMBERSHIPKEYIMPL_TYPE4_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_MEMBERSHIPKEYIMPL_TYPE4)
#define SCAPIX_JAVA_API_SUN_NIO_CH_MEMBERSHIPKEYIMPL_TYPE4

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::MembershipKeyImpl_Type4 : public jni::object_base<"sun/nio/ch/MembershipKeyImpl$Type4",
	sun::nio::ch::MembershipKeyImpl>
{
public:


protected:

	MembershipKeyImpl_Type4(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_MEMBERSHIPKEYIMPL_TYPE4
