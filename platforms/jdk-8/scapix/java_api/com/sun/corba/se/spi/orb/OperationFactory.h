// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::orb { class OperationFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::orb::OperationFactory>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/orb/OperationFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orb/Operation.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::orb::OperationFactory : public jni::object_base<"com/sun/corba/se/spi/orb/OperationFactory",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::corba::se::spi::orb::Operation> maskErrorAction(jni::ref<com::sun::corba::se::spi::orb::Operation> p1) { return call_static_method<"maskErrorAction", jni::ref<com::sun::corba::se::spi::orb::Operation>>(p1); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> indexAction(jint p1) { return call_static_method<"indexAction", jni::ref<com::sun::corba::se::spi::orb::Operation>>(p1); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> identityAction() { return call_static_method<"identityAction", jni::ref<com::sun::corba::se::spi::orb::Operation>>(); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> suffixAction() { return call_static_method<"suffixAction", jni::ref<com::sun::corba::se::spi::orb::Operation>>(); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> valueAction() { return call_static_method<"valueAction", jni::ref<com::sun::corba::se::spi::orb::Operation>>(); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> booleanAction() { return call_static_method<"booleanAction", jni::ref<com::sun::corba::se::spi::orb::Operation>>(); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> integerAction() { return call_static_method<"integerAction", jni::ref<com::sun::corba::se::spi::orb::Operation>>(); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> stringAction() { return call_static_method<"stringAction", jni::ref<com::sun::corba::se::spi::orb::Operation>>(); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> classAction() { return call_static_method<"classAction", jni::ref<com::sun::corba::se::spi::orb::Operation>>(); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> setFlagAction() { return call_static_method<"setFlagAction", jni::ref<com::sun::corba::se::spi::orb::Operation>>(); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> URLAction() { return call_static_method<"URLAction", jni::ref<com::sun::corba::se::spi::orb::Operation>>(); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> integerRangeAction(jint p1, jint p2) { return call_static_method<"integerRangeAction", jni::ref<com::sun::corba::se::spi::orb::Operation>>(p1, p2); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> listAction(jni::ref<java::lang::String> p1, jni::ref<com::sun::corba::se::spi::orb::Operation> p2) { return call_static_method<"listAction", jni::ref<com::sun::corba::se::spi::orb::Operation>>(p1, p2); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> sequenceAction(jni::ref<java::lang::String> p1, jni::ref<jni::array<com::sun::corba::se::spi::orb::Operation>> p2) { return call_static_method<"sequenceAction", jni::ref<com::sun::corba::se::spi::orb::Operation>>(p1, p2); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> compose(jni::ref<com::sun::corba::se::spi::orb::Operation> p1, jni::ref<com::sun::corba::se::spi::orb::Operation> p2) { return call_static_method<"compose", jni::ref<com::sun::corba::se::spi::orb::Operation>>(p1, p2); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> mapAction(jni::ref<com::sun::corba::se::spi::orb::Operation> p1) { return call_static_method<"mapAction", jni::ref<com::sun::corba::se::spi::orb::Operation>>(p1); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> mapSequenceAction(jni::ref<jni::array<com::sun::corba::se::spi::orb::Operation>> p1) { return call_static_method<"mapSequenceAction", jni::ref<com::sun::corba::se::spi::orb::Operation>>(p1); }
	static jni::ref<com::sun::corba::se::spi::orb::Operation> convertIntegerToShort() { return call_static_method<"convertIntegerToShort", jni::ref<com::sun::corba::se::spi::orb::Operation>>(); }

protected:

	OperationFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_OPERATIONFACTORY
