// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/management/openmbean/CompositeData.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_LAZYCOMPOSITEDATA_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_LAZYCOMPOSITEDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management { class LazyCompositeData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::LazyCompositeData>
{
	static constexpr fixed_string class_name = "sun/management/LazyCompositeData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::management::openmbean::CompositeData, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_LAZYCOMPOSITEDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_LAZYCOMPOSITEDATA)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_LAZYCOMPOSITEDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/javax/management/openmbean/CompositeType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::LazyCompositeData : public jni::object_base<"sun/management/LazyCompositeData",
	java::lang::Object,
	javax::management::openmbean::CompositeData,
	java::io::Serializable>
{
public:

	static jni::ref<sun::management::LazyCompositeData> new_object() { return base_::new_object(); }
	jboolean containsKey(jni::ref<java::lang::String> p1) { return call_method<"containsKey", jboolean>(p1); }
	jboolean containsValue(jni::ref<java::lang::Object> p1) { return call_method<"containsValue", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::String> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<jni::array<java::lang::Object>> getAll(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"getAll", jni::ref<jni::array<java::lang::Object>>>(p1); }
	jni::ref<javax::management::openmbean::CompositeType> getCompositeType() { return call_method<"getCompositeType", jni::ref<javax::management::openmbean::CompositeType>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }

protected:

	LazyCompositeData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_LAZYCOMPOSITEDATA
