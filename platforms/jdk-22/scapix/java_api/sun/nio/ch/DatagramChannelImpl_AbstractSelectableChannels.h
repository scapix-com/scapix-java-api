// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMCHANNELIMPL_ABSTRACTSELECTABLECHANNELS_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMCHANNELIMPL_ABSTRACTSELECTABLECHANNELS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class DatagramChannelImpl_AbstractSelectableChannels; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::DatagramChannelImpl_AbstractSelectableChannels>
{
	static constexpr fixed_string class_name = "sun/nio/ch/DatagramChannelImpl$AbstractSelectableChannels";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMCHANNELIMPL_ABSTRACTSELECTABLECHANNELS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMCHANNELIMPL_ABSTRACTSELECTABLECHANNELS)
#define SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMCHANNELIMPL_ABSTRACTSELECTABLECHANNELS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::DatagramChannelImpl_AbstractSelectableChannels : public jni::object_base<"sun/nio/ch/DatagramChannelImpl$AbstractSelectableChannels",
	java::lang::Object>
{
public:


protected:

	DatagramChannelImpl_AbstractSelectableChannels(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_DATAGRAMCHANNELIMPL_ABSTRACTSELECTABLECHANNELS
