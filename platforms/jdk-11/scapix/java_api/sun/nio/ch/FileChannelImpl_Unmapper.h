// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_FILECHANNELIMPL_UNMAPPER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_FILECHANNELIMPL_UNMAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class FileChannelImpl_Unmapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::FileChannelImpl_Unmapper>
{
	static constexpr fixed_string class_name = "sun/nio/ch/FileChannelImpl$Unmapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_FILECHANNELIMPL_UNMAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_FILECHANNELIMPL_UNMAPPER)
#define SCAPIX_JAVA_API_SUN_NIO_CH_FILECHANNELIMPL_UNMAPPER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::FileChannelImpl_Unmapper : public jni::object_base<"sun/nio/ch/FileChannelImpl$Unmapper",
	java::lang::Object,
	java::lang::Runnable>
{
public:

	void run() { return call_method<"run", void>(); }

protected:

	FileChannelImpl_Unmapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_FILECHANNELIMPL_UNMAPPER