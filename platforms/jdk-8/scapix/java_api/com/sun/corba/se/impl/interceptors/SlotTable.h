// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_INTERCEPTORS_SLOTTABLE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_INTERCEPTORS_SLOTTABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::interceptors { class SlotTable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::interceptors::SlotTable>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/interceptors/SlotTable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_INTERCEPTORS_SLOTTABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_INTERCEPTORS_SLOTTABLE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_INTERCEPTORS_SLOTTABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/omg/CORBA/Any.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::interceptors::SlotTable : public jni::object_base<"com/sun/corba/se/impl/interceptors/SlotTable",
	java::lang::Object>
{
public:

	void set_slot(jint p1, jni::ref<org::omg::CORBA::Any> p2) { return call_method<"set_slot", void>(p1, p2); }
	jni::ref<org::omg::CORBA::Any> get_slot(jint p1) { return call_method<"get_slot", jni::ref<org::omg::CORBA::Any>>(p1); }

protected:

	SlotTable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_INTERCEPTORS_SLOTTABLE