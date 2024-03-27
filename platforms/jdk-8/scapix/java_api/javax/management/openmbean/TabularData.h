// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_TABULARDATA_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_TABULARDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::openmbean { class TabularData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::openmbean::TabularData>
{
	static constexpr fixed_string class_name = "javax/management/openmbean/TabularData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_TABULARDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_TABULARDATA)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_TABULARDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/javax/management/openmbean/CompositeData.h>
#include <scapix/java_api/javax/management/openmbean/TabularType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::openmbean::TabularData : public jni::object_base<"javax/management/openmbean/TabularData",
	java::lang::Object>
{
public:

	jni::ref<javax::management::openmbean::TabularType> getTabularType() { return call_method<"getTabularType", jni::ref<javax::management::openmbean::TabularType>>(); }
	jni::ref<jni::array<java::lang::Object>> calculateIndex(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_method<"calculateIndex", jni::ref<jni::array<java::lang::Object>>>(p1); }
	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jboolean containsKey(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"containsKey", jboolean>(p1); }
	jboolean containsValue(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_method<"containsValue", jboolean>(p1); }
	jni::ref<javax::management::openmbean::CompositeData> get(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"get", jni::ref<javax::management::openmbean::CompositeData>>(p1); }
	void put(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_method<"put", void>(p1); }
	jni::ref<javax::management::openmbean::CompositeData> remove(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"remove", jni::ref<javax::management::openmbean::CompositeData>>(p1); }
	void putAll(jni::ref<jni::array<javax::management::openmbean::CompositeData>> p1) { return call_method<"putAll", void>(p1); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::util::Set> keySet() { return call_method<"keySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	TabularData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_OPENMBEAN_TABULARDATA