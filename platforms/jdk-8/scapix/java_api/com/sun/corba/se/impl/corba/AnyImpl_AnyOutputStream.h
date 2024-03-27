// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/encoding/EncapsOutputStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_ANYIMPL_ANYOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_ANYIMPL_ANYOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::corba { class AnyImpl_AnyOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::corba::AnyImpl_AnyOutputStream>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/corba/AnyImpl$AnyOutputStream";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::encoding::EncapsOutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_ANYIMPL_ANYOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_ANYIMPL_ANYOUTPUTSTREAM)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_ANYIMPL_ANYOUTPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/org/omg/CORBA/portable/InputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::corba::AnyImpl_AnyOutputStream : public jni::object_base<"com/sun/corba/se/impl/corba/AnyImpl$AnyOutputStream",
	com::sun::corba::se::impl::encoding::EncapsOutputStream>
{
public:

	static jni::ref<com::sun::corba::se::impl::corba::AnyImpl_AnyOutputStream> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return base_::new_object(p1); }
	jni::ref<org::omg::CORBA::portable::InputStream> create_input_stream() { return call_method<"create_input_stream", jni::ref<org::omg::CORBA::portable::InputStream>>(); }

protected:

	AnyImpl_AnyOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_ANYIMPL_ANYOUTPUTSTREAM
