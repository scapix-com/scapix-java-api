// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/encoding/BufferManagerWrite.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERWRITECOLLECT_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERWRITECOLLECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::encoding { class BufferManagerWriteCollect; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::encoding::BufferManagerWriteCollect>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/encoding/BufferManagerWriteCollect";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::encoding::BufferManagerWrite>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERWRITECOLLECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERWRITECOLLECT)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERWRITECOLLECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/encoding/ByteBufferWithInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::encoding::BufferManagerWriteCollect : public jni::object_base<"com/sun/corba/se/impl/encoding/BufferManagerWriteCollect",
	com::sun::corba::se::impl::encoding::BufferManagerWrite>
{
public:

	jboolean sentFragment() { return call_method<"sentFragment", jboolean>(); }
	jint getBufferSize() { return call_method<"getBufferSize", jint>(); }
	void overflow(jni::ref<com::sun::corba::se::impl::encoding::ByteBufferWithInfo> p1) { return call_method<"overflow", void>(p1); }
	void sendMessage() { return call_method<"sendMessage", void>(); }
	void close() { return call_method<"close", void>(); }

protected:

	BufferManagerWriteCollect(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERWRITECOLLECT
