// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_ZONEID_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_ZONEID_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time { class ZoneId; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::ZoneId>
{
	static constexpr fixed_string class_name = "java/time/ZoneId";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_ZONEID_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_ZONEID)
#define SCAPIX_JAVA_API_JAVA_TIME_ZONEID

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/ZoneOffset.h>
#include <scapix/java_api/java/time/format/TextStyle.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/zone/ZoneRules.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::time::ZoneId : public jni::object_base<"java/time/ZoneId",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::Map> SHORT_IDS() { return get_static_field<"SHORT_IDS", jni::ref<java::util::Map>>(); }

	static jni::ref<java::time::ZoneId> systemDefault() { return call_static_method<"systemDefault", jni::ref<java::time::ZoneId>>(); }
	static jni::ref<java::util::Set> getAvailableZoneIds() { return call_static_method<"getAvailableZoneIds", jni::ref<java::util::Set>>(); }
	static jni::ref<java::time::ZoneId> of(jni::ref<java::lang::String> zoneId, jni::ref<java::util::Map> aliasMap) { return call_static_method<"of", jni::ref<java::time::ZoneId>>(zoneId, aliasMap); }
	static jni::ref<java::time::ZoneId> of(jni::ref<java::lang::String> zoneId) { return call_static_method<"of", jni::ref<java::time::ZoneId>>(zoneId); }
	static jni::ref<java::time::ZoneId> ofOffset(jni::ref<java::lang::String> prefix, jni::ref<java::time::ZoneOffset> offset) { return call_static_method<"ofOffset", jni::ref<java::time::ZoneId>>(prefix, offset); }
	static jni::ref<java::time::ZoneId> from(jni::ref<java::time::temporal::TemporalAccessor> temporal) { return call_static_method<"from", jni::ref<java::time::ZoneId>>(temporal); }
	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDisplayName(jni::ref<java::time::format::TextStyle> style, jni::ref<java::util::Locale> locale) { return call_method<"getDisplayName", jni::ref<java::lang::String>>(style, locale); }
	jni::ref<java::time::zone::ZoneRules> getRules() { return call_method<"getRules", jni::ref<java::time::zone::ZoneRules>>(); }
	jni::ref<java::time::ZoneId> normalized() { return call_method<"normalized", jni::ref<java::time::ZoneId>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ZoneId(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_ZONEID
