// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/encoding/EncapsInputStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_ANYIMPL_ANYINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_ANYIMPL_ANYINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::corba { class AnyImpl_AnyInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::corba::AnyImpl_AnyInputStream>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/corba/AnyImpl$AnyInputStream";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::encoding::EncapsInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_ANYIMPL_ANYINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_ANYIMPL_ANYINPUTSTREAM)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_ANYIMPL_ANYINPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::corba::AnyImpl_AnyInputStream : public jni::object_base<"com/sun/corba/se/impl/corba/AnyImpl$AnyInputStream",
	com::sun::corba::se::impl::encoding::EncapsInputStream>
{
public:

	static jni::ref<com::sun::corba::se::impl::corba::AnyImpl_AnyInputStream> new_object(jni::ref<com::sun::corba::se::impl::encoding::EncapsInputStream> p1) { return base_::new_object(p1); }

protected:

	AnyImpl_AnyInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_CORBA_ANYIMPL_ANYINPUTSTREAM
