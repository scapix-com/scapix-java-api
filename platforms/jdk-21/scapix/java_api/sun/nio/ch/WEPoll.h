// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_WEPOLL_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_WEPOLL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class WEPoll; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::WEPoll>
{
	static constexpr fixed_string class_name = "sun/nio/ch/WEPoll";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_WEPOLL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_WEPOLL)
#define SCAPIX_JAVA_API_SUN_NIO_CH_WEPOLL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::WEPoll : public jni::object_base<"sun/nio/ch/WEPoll",
	java::lang::Object>
{
public:


protected:

	WEPoll(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_WEPOLL
