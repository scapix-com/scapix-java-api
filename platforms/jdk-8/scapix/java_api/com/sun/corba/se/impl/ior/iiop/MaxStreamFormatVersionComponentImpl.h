// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/spi/ior/TaggedComponentBase.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/iiop/MaxStreamFormatVersionComponent.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_MAXSTREAMFORMATVERSIONCOMPONENTIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_MAXSTREAMFORMATVERSIONCOMPONENTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::ior::iiop { class MaxStreamFormatVersionComponentImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::ior::iiop::MaxStreamFormatVersionComponentImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/ior/iiop/MaxStreamFormatVersionComponentImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::spi::ior::TaggedComponentBase, scapix::java_api::com::sun::corba::se::spi::ior::iiop::MaxStreamFormatVersionComponent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_MAXSTREAMFORMATVERSIONCOMPONENTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_MAXSTREAMFORMATVERSIONCOMPONENTIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_MAXSTREAMFORMATVERSIONCOMPONENTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::ior::iiop::MaxStreamFormatVersionComponentImpl : public jni::object_base<"com/sun/corba/se/impl/ior/iiop/MaxStreamFormatVersionComponentImpl",
	com::sun::corba::se::spi::ior::TaggedComponentBase,
	com::sun::corba::se::spi::ior::iiop::MaxStreamFormatVersionComponent>
{
public:

	static jni::ref<com::sun::corba::se::impl::ior::iiop::MaxStreamFormatVersionComponentImpl> singleton() { return get_static_field<"singleton", jni::ref<com::sun::corba::se::impl::ior::iiop::MaxStreamFormatVersionComponentImpl>>(); }

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<com::sun::corba::se::impl::ior::iiop::MaxStreamFormatVersionComponentImpl> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::corba::se::impl::ior::iiop::MaxStreamFormatVersionComponentImpl> new_object(jbyte p1) { return base_::new_object(p1); }
	jbyte getMaxStreamFormatVersion() { return call_method<"getMaxStreamFormatVersion", jbyte>(); }
	void writeContents(jni::ref<org::omg::CORBA_2_3::portable::OutputStream> p1) { return call_method<"writeContents", void>(p1); }
	jint getId() { return call_method<"getId", jint>(); }

protected:

	MaxStreamFormatVersionComponentImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_MAXSTREAMFORMATVERSIONCOMPONENTIMPL