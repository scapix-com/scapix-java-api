// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_HASGETTRANSFERHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_HASGETTRANSFERHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class TransferHandler_HasGetTransferHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::TransferHandler_HasGetTransferHandler>
{
	static constexpr fixed_string class_name = "javax/swing/TransferHandler$HasGetTransferHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_HASGETTRANSFERHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_HASGETTRANSFERHANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_HASGETTRANSFERHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/TransferHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::TransferHandler_HasGetTransferHandler : public jni::object_base<"javax/swing/TransferHandler$HasGetTransferHandler",
	java::lang::Object>
{
public:

	jni::ref<javax::swing::TransferHandler> getTransferHandler() { return call_method<"getTransferHandler", jni::ref<javax::swing::TransferHandler>>(); }

protected:

	TransferHandler_HasGetTransferHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_HASGETTRANSFERHANDLER
