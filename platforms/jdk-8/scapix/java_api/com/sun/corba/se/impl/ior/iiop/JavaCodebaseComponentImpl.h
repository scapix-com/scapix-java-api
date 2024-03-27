// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/spi/ior/TaggedComponentBase.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/iiop/JavaCodebaseComponent.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_JAVACODEBASECOMPONENTIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_JAVACODEBASECOMPONENTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::ior::iiop { class JavaCodebaseComponentImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::ior::iiop::JavaCodebaseComponentImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/ior/iiop/JavaCodebaseComponentImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::spi::ior::TaggedComponentBase, scapix::java_api::com::sun::corba::se::spi::ior::iiop::JavaCodebaseComponent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_JAVACODEBASECOMPONENTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_JAVACODEBASECOMPONENTIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_JAVACODEBASECOMPONENTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::ior::iiop::JavaCodebaseComponentImpl : public jni::object_base<"com/sun/corba/se/impl/ior/iiop/JavaCodebaseComponentImpl",
	com::sun::corba::se::spi::ior::TaggedComponentBase,
	com::sun::corba::se::spi::ior::iiop::JavaCodebaseComponent>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getURLs() { return call_method<"getURLs", jni::ref<java::lang::String>>(); }
	static jni::ref<com::sun::corba::se::impl::ior::iiop::JavaCodebaseComponentImpl> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	void writeContents(jni::ref<org::omg::CORBA_2_3::portable::OutputStream> p1) { return call_method<"writeContents", void>(p1); }
	jint getId() { return call_method<"getId", jint>(); }

protected:

	JavaCodebaseComponentImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_JAVACODEBASECOMPONENTIMPL
