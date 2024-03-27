// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/nio/ch/Poller.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_WEPOLLPOLLER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_WEPOLLPOLLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class WEPollPoller; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::WEPollPoller>
{
	static constexpr fixed_string class_name = "sun/nio/ch/WEPollPoller";
	using base_classes = std::tuple<scapix::java_api::sun::nio::ch::Poller>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_WEPOLLPOLLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_WEPOLLPOLLER)
#define SCAPIX_JAVA_API_SUN_NIO_CH_WEPOLLPOLLER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::WEPollPoller : public jni::object_base<"sun/nio/ch/WEPollPoller",
	sun::nio::ch::Poller>
{
public:


protected:

	WEPollPoller(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_WEPOLLPOLLER
