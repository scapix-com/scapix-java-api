// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/portable/ObjectImpl.h>
#include <scapix/java_api/com/sun/corba/se/spi/activation/InitialNameService.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__INITIALNAMESERVICESTUB_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__INITIALNAMESERVICESTUB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::activation { class _InitialNameServiceStub; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::activation::_InitialNameServiceStub>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/activation/_InitialNameServiceStub";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::portable::ObjectImpl, scapix::java_api::com::sun::corba::se::spi::activation::InitialNameService>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__INITIALNAMESERVICESTUB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__INITIALNAMESERVICESTUB)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__INITIALNAMESERVICESTUB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::activation::_InitialNameServiceStub : public jni::object_base<"com/sun/corba/se/spi/activation/_InitialNameServiceStub",
	org::omg::CORBA::portable::ObjectImpl,
	com::sun::corba::se::spi::activation::InitialNameService>
{
public:

	static jni::ref<com::sun::corba::se::spi::activation::_InitialNameServiceStub> new_object() { return base_::new_object(); }
	void bind(jni::ref<java::lang::String> p1, jni::ref<org::omg::CORBA::Object> p2, jboolean p3) { return call_method<"bind", void>(p1, p2, p3); }
	jni::ref<jni::array<java::lang::String>> _ids() { return call_method<"_ids", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	_InitialNameServiceStub(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__INITIALNAMESERVICESTUB