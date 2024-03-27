// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_MEDIASIZE_OTHER_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_MEDIASIZE_OTHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute::standard { class MediaSize_Other; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::standard::MediaSize_Other>
{
	static constexpr fixed_string class_name = "javax/print/attribute/standard/MediaSize$Other";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_MEDIASIZE_OTHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_MEDIASIZE_OTHER)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_MEDIASIZE_OTHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/print/attribute/standard/MediaSize.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::attribute::standard::MediaSize_Other : public jni::object_base<"javax/print/attribute/standard/MediaSize$Other",
	java::lang::Object>
{
public:

	static jni::ref<javax::print::attribute::standard::MediaSize> EXECUTIVE() { return get_static_field<"EXECUTIVE", jni::ref<javax::print::attribute::standard::MediaSize>>(); }
	static jni::ref<javax::print::attribute::standard::MediaSize> LEDGER() { return get_static_field<"LEDGER", jni::ref<javax::print::attribute::standard::MediaSize>>(); }
	static jni::ref<javax::print::attribute::standard::MediaSize> TABLOID() { return get_static_field<"TABLOID", jni::ref<javax::print::attribute::standard::MediaSize>>(); }
	static jni::ref<javax::print::attribute::standard::MediaSize> INVOICE() { return get_static_field<"INVOICE", jni::ref<javax::print::attribute::standard::MediaSize>>(); }
	static jni::ref<javax::print::attribute::standard::MediaSize> FOLIO() { return get_static_field<"FOLIO", jni::ref<javax::print::attribute::standard::MediaSize>>(); }
	static jni::ref<javax::print::attribute::standard::MediaSize> QUARTO() { return get_static_field<"QUARTO", jni::ref<javax::print::attribute::standard::MediaSize>>(); }
	static jni::ref<javax::print::attribute::standard::MediaSize> ITALY_ENVELOPE() { return get_static_field<"ITALY_ENVELOPE", jni::ref<javax::print::attribute::standard::MediaSize>>(); }
	static jni::ref<javax::print::attribute::standard::MediaSize> MONARCH_ENVELOPE() { return get_static_field<"MONARCH_ENVELOPE", jni::ref<javax::print::attribute::standard::MediaSize>>(); }
	static jni::ref<javax::print::attribute::standard::MediaSize> PERSONAL_ENVELOPE() { return get_static_field<"PERSONAL_ENVELOPE", jni::ref<javax::print::attribute::standard::MediaSize>>(); }
	static jni::ref<javax::print::attribute::standard::MediaSize> JAPANESE_POSTCARD() { return get_static_field<"JAPANESE_POSTCARD", jni::ref<javax::print::attribute::standard::MediaSize>>(); }
	static jni::ref<javax::print::attribute::standard::MediaSize> JAPANESE_DOUBLE_POSTCARD() { return get_static_field<"JAPANESE_DOUBLE_POSTCARD", jni::ref<javax::print::attribute::standard::MediaSize>>(); }


protected:

	MediaSize_Other(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_MEDIASIZE_OTHER