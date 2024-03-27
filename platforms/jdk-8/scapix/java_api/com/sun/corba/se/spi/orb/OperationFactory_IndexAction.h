// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/spi/orb/OperationFactory_OperationBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY_INDEXACTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY_INDEXACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::orb { class OperationFactory_IndexAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::orb::OperationFactory_IndexAction>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/orb/OperationFactory$IndexAction";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::spi::orb::OperationFactory_OperationBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY_INDEXACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY_INDEXACTION)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY_INDEXACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::spi::orb::OperationFactory_IndexAction : public jni::object_base<"com/sun/corba/se/spi/orb/OperationFactory$IndexAction",
	com::sun::corba::se::spi::orb::OperationFactory_OperationBase>
{
public:

	static jni::ref<com::sun::corba::se::spi::orb::OperationFactory_IndexAction> new_object(jint p1) { return base_::new_object(p1); }
	jni::ref<java::lang::Object> operate(jni::ref<java::lang::Object> p1) { return call_method<"operate", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	OperationFactory_IndexAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY_INDEXACTION