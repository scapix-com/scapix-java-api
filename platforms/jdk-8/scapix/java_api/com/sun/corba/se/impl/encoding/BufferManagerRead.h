// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERREAD_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERREAD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::encoding { class BufferManagerRead; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::encoding::BufferManagerRead>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/encoding/BufferManagerRead";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERREAD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERREAD)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERREAD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/encoding/ByteBufferWithInfo.h>
#include <scapix/java_api/com/sun/corba/se/impl/encoding/MarkAndResetHandler.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/FragmentMessage.h>
#include <scapix/java_api/com/sun/corba/se/impl/protocol/giopmsgheaders/Message.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::encoding::BufferManagerRead : public jni::object_base<"com/sun/corba/se/impl/encoding/BufferManagerRead",
	java::lang::Object>
{
public:

	void processFragment(jni::ref<java::nio::ByteBuffer> p1, jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::FragmentMessage> p2) { return call_method<"processFragment", void>(p1, p2); }
	jni::ref<com::sun::corba::se::impl::encoding::ByteBufferWithInfo> underflow(jni::ref<com::sun::corba::se::impl::encoding::ByteBufferWithInfo> p1) { return call_method<"underflow", jni::ref<com::sun::corba::se::impl::encoding::ByteBufferWithInfo>>(p1); }
	void init(jni::ref<com::sun::corba::se::impl::protocol::giopmsgheaders::Message> p1) { return call_method<"init", void>(p1); }
	jni::ref<com::sun::corba::se::impl::encoding::MarkAndResetHandler> getMarkAndResetHandler() { return call_method<"getMarkAndResetHandler", jni::ref<com::sun::corba::se::impl::encoding::MarkAndResetHandler>>(); }
	void cancelProcessing(jint p1) { return call_method<"cancelProcessing", void>(p1); }
	void close(jni::ref<com::sun::corba::se::impl::encoding::ByteBufferWithInfo> p1) { return call_method<"close", void>(p1); }

protected:

	BufferManagerRead(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERREAD
