// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/print/attribute/standard/Media.h>
#include <scapix/java_api/javax/print/attribute/Attribute.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_MEDIATRAY_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_MEDIATRAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute::standard { class MediaTray; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::standard::MediaTray>
{
	static constexpr fixed_string class_name = "javax/print/attribute/standard/MediaTray";
	using base_classes = std::tuple<scapix::java_api::javax::print::attribute::standard::Media, scapix::java_api::javax::print::attribute::Attribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_MEDIATRAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_MEDIATRAY)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_MEDIATRAY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::attribute::standard::MediaTray : public jni::object_base<"javax/print/attribute/standard/MediaTray",
	javax::print::attribute::standard::Media,
	javax::print::attribute::Attribute>
{
public:

	static jni::ref<javax::print::attribute::standard::MediaTray> TOP() { return get_static_field<"TOP", jni::ref<javax::print::attribute::standard::MediaTray>>(); }
	static jni::ref<javax::print::attribute::standard::MediaTray> MIDDLE() { return get_static_field<"MIDDLE", jni::ref<javax::print::attribute::standard::MediaTray>>(); }
	static jni::ref<javax::print::attribute::standard::MediaTray> BOTTOM() { return get_static_field<"BOTTOM", jni::ref<javax::print::attribute::standard::MediaTray>>(); }
	static jni::ref<javax::print::attribute::standard::MediaTray> ENVELOPE() { return get_static_field<"ENVELOPE", jni::ref<javax::print::attribute::standard::MediaTray>>(); }
	static jni::ref<javax::print::attribute::standard::MediaTray> MANUAL() { return get_static_field<"MANUAL", jni::ref<javax::print::attribute::standard::MediaTray>>(); }
	static jni::ref<javax::print::attribute::standard::MediaTray> LARGE_CAPACITY() { return get_static_field<"LARGE_CAPACITY", jni::ref<javax::print::attribute::standard::MediaTray>>(); }
	static jni::ref<javax::print::attribute::standard::MediaTray> MAIN() { return get_static_field<"MAIN", jni::ref<javax::print::attribute::standard::MediaTray>>(); }
	static jni::ref<javax::print::attribute::standard::MediaTray> SIDE() { return get_static_field<"SIDE", jni::ref<javax::print::attribute::standard::MediaTray>>(); }


protected:

	MediaTray(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_MEDIATRAY
