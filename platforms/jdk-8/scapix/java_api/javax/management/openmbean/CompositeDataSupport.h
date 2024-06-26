// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/management/openmbean/CompositeData.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_COMPOSITEDATASUPPORT_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_COMPOSITEDATASUPPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::openmbean { class CompositeDataSupport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::openmbean::CompositeDataSupport>
{
	static constexpr fixed_string class_name = "javax/management/openmbean/CompositeDataSupport";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::management::openmbean::CompositeData, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_COMPOSITEDATASUPPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_COMPOSITEDATASUPPORT)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_COMPOSITEDATASUPPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/javax/management/openmbean/CompositeType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::openmbean::CompositeDataSupport : public jni::object_base<"javax/management/openmbean/CompositeDataSupport",
	java::lang::Object,
	javax::management::openmbean::CompositeData,
	java::io::Serializable>
{
public:

	static jni::ref<javax::management::openmbean::CompositeDataSupport> new_object(jni::ref<javax::management::openmbean::CompositeType> p1, jni::ref<jni::array<java::lang::String>> p2, jni::ref<jni::array<java::lang::Object>> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::management::openmbean::CompositeDataSupport> new_object(jni::ref<javax::management::openmbean::CompositeType> p1, jni::ref<java::util::Map> p2) { return base_::new_object(p1, p2); }
	jni::ref<javax::management::openmbean::CompositeType> getCompositeType() { return call_method<"getCompositeType", jni::ref<javax::management::openmbean::CompositeType>>(); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::String> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<jni::array<java::lang::Object>> getAll(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"getAll", jni::ref<jni::array<java::lang::Object>>>(p1); }
	jboolean containsKey(jni::ref<java::lang::String> p1) { return call_method<"containsKey", jboolean>(p1); }
	jboolean containsValue(jni::ref<java::lang::Object> p1) { return call_method<"containsValue", jboolean>(p1); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	CompositeDataSupport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_COMPOSITEDATASUPPORT
