// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/nio/ch/PollerProvider.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_DEFAULTPOLLERPROVIDER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_DEFAULTPOLLERPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class DefaultPollerProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::DefaultPollerProvider>
{
	static constexpr fixed_string class_name = "sun/nio/ch/DefaultPollerProvider";
	using base_classes = std::tuple<scapix::java_api::sun::nio::ch::PollerProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_DEFAULTPOLLERPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_DEFAULTPOLLERPROVIDER)
#define SCAPIX_JAVA_API_SUN_NIO_CH_DEFAULTPOLLERPROVIDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::DefaultPollerProvider : public jni::object_base<"sun/nio/ch/DefaultPollerProvider",
	sun::nio::ch::PollerProvider>
{
public:


protected:

	DefaultPollerProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_DEFAULTPOLLERPROVIDER
