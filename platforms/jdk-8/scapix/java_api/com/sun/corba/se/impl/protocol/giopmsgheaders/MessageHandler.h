// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_MESSAGEHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_MESSAGEHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::protocol::giopmsgheaders { class MessageHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::protocol::giopmsgheaders::MessageHandler>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/protocol/giopmsgheaders/MessageHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_MESSAGEHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_MESSAGEHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_MESSAGEHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/CancelRequestMessage.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/FragmentMessage_1_1.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/FragmentMessage_1_2.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/LocateReplyMessage_1_0.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/LocateReplyMessage_1_1.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/LocateReplyMessage_1_2.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/LocateRequestMessage_1_0.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/LocateRequestMessage_1_1.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/LocateRequestMessage_1_2.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/Message.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/ReplyMessage_1_0.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/ReplyMessage_1_1.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/ReplyMessage_1_2.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/RequestMessage_1_0.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/RequestMessage_1_1.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/RequestMessage_1_2.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::protocol::giopmsgheaders::MessageHandler : public jni::object_base<"com/sun/corba/se/impl/protocol/giopmsgheaders/MessageHandler",
	java::lang::Object>
{
public:

	void handleInput(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::Message> p1) { return call_method<"handleInput", void>(p1); }
	void handleInput(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::RequestMessage_1_0> p1) { return call_method<"handleInput", void>(p1); }
	void handleInput(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::RequestMessage_1_1> p1) { return call_method<"handleInput", void>(p1); }
	void handleInput(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::RequestMessage_1_2> p1) { return call_method<"handleInput", void>(p1); }
	void handleInput(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::ReplyMessage_1_0> p1) { return call_method<"handleInput", void>(p1); }
	void handleInput(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::ReplyMessage_1_1> p1) { return call_method<"handleInput", void>(p1); }
	void handleInput(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::ReplyMessage_1_2> p1) { return call_method<"handleInput", void>(p1); }
	void handleInput(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::LocateRequestMessage_1_0> p1) { return call_method<"handleInput", void>(p1); }
	void handleInput(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::LocateRequestMessage_1_1> p1) { return call_method<"handleInput", void>(p1); }
	void handleInput(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::LocateRequestMessage_1_2> p1) { return call_method<"handleInput", void>(p1); }
	void handleInput(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::LocateReplyMessage_1_0> p1) { return call_method<"handleInput", void>(p1); }
	void handleInput(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::LocateReplyMessage_1_1> p1) { return call_method<"handleInput", void>(p1); }
	void handleInput(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::LocateReplyMessage_1_2> p1) { return call_method<"handleInput", void>(p1); }
	void handleInput(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::FragmentMessage_1_1> p1) { return call_method<"handleInput", void>(p1); }
	void handleInput(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::FragmentMessage_1_2> p1) { return call_method<"handleInput", void>(p1); }
	void handleInput(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::CancelRequestMessage> p1) { return call_method<"handleInput", void>(p1); }

protected:

	MessageHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_GIOPMSGHEADERS_MESSAGEHANDLER