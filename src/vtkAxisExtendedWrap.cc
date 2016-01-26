/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkAxisExtendedWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAxisExtendedWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkAxisExtendedWrap::ptpl;

VtkAxisExtendedWrap::VtkAxisExtendedWrap()
{ }

VtkAxisExtendedWrap::VtkAxisExtendedWrap(vtkSmartPointer<vtkAxisExtended> _native)
{ native = _native; }

VtkAxisExtendedWrap::~VtkAxisExtendedWrap()
{ }

void VtkAxisExtendedWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAxisExtended").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AxisExtended").ToLocalChecked(), ConstructorGetter);
}

void VtkAxisExtendedWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAxisExtendedWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAxisExtendedWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Coverage", Coverage);
	Nan::SetPrototypeMethod(tpl, "coverage", Coverage);

	Nan::SetPrototypeMethod(tpl, "CoverageMax", CoverageMax);
	Nan::SetPrototypeMethod(tpl, "coverageMax", CoverageMax);

	Nan::SetPrototypeMethod(tpl, "Density", Density);
	Nan::SetPrototypeMethod(tpl, "density", Density);

	Nan::SetPrototypeMethod(tpl, "DensityMax", DensityMax);
	Nan::SetPrototypeMethod(tpl, "densityMax", DensityMax);

	Nan::SetPrototypeMethod(tpl, "FormatLegibilityScore", FormatLegibilityScore);
	Nan::SetPrototypeMethod(tpl, "formatLegibilityScore", FormatLegibilityScore);

	Nan::SetPrototypeMethod(tpl, "FormatStringLength", FormatStringLength);
	Nan::SetPrototypeMethod(tpl, "formatStringLength", FormatStringLength);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDesiredFontSize", GetDesiredFontSize);
	Nan::SetPrototypeMethod(tpl, "getDesiredFontSize", GetDesiredFontSize);

	Nan::SetPrototypeMethod(tpl, "GetFontSize", GetFontSize);
	Nan::SetPrototypeMethod(tpl, "getFontSize", GetFontSize);

	Nan::SetPrototypeMethod(tpl, "GetLabelFormat", GetLabelFormat);
	Nan::SetPrototypeMethod(tpl, "getLabelFormat", GetLabelFormat);

	Nan::SetPrototypeMethod(tpl, "GetOrientation", GetOrientation);
	Nan::SetPrototypeMethod(tpl, "getOrientation", GetOrientation);

	Nan::SetPrototypeMethod(tpl, "GetPrecision", GetPrecision);
	Nan::SetPrototypeMethod(tpl, "getPrecision", GetPrecision);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDesiredFontSize", SetDesiredFontSize);
	Nan::SetPrototypeMethod(tpl, "setDesiredFontSize", SetDesiredFontSize);

	Nan::SetPrototypeMethod(tpl, "SetFontSize", SetFontSize);
	Nan::SetPrototypeMethod(tpl, "setFontSize", SetFontSize);

	Nan::SetPrototypeMethod(tpl, "SetLabelFormat", SetLabelFormat);
	Nan::SetPrototypeMethod(tpl, "setLabelFormat", SetLabelFormat);

	Nan::SetPrototypeMethod(tpl, "SetOrientation", SetOrientation);
	Nan::SetPrototypeMethod(tpl, "setOrientation", SetOrientation);

	Nan::SetPrototypeMethod(tpl, "SetPrecision", SetPrecision);
	Nan::SetPrototypeMethod(tpl, "setPrecision", SetPrecision);

	Nan::SetPrototypeMethod(tpl, "Simplicity", Simplicity);
	Nan::SetPrototypeMethod(tpl, "simplicity", Simplicity);

	Nan::SetPrototypeMethod(tpl, "SimplicityMax", SimplicityMax);
	Nan::SetPrototypeMethod(tpl, "simplicityMax", SimplicityMax);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkAxisExtendedWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAxisExtended> native = vtkSmartPointer<vtkAxisExtended>::New();
		VtkAxisExtendedWrap* obj = new VtkAxisExtendedWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAxisExtendedWrap::Coverage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					double r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->Coverage(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisExtendedWrap::CoverageMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				double r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->CoverageMax(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisExtendedWrap::Density(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							double r;
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							r = native->Density(
								info[0]->Int32Value(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							info.GetReturnValue().Set(Nan::New(r));
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisExtendedWrap::DensityMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			double r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->DensityMax(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisExtendedWrap::FormatLegibilityScore(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			double r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->FormatLegibilityScore(
				info[0]->NumberValue(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisExtendedWrap::FormatStringLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->FormatStringLength(
					info[0]->Int32Value(),
					info[1]->NumberValue(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisExtendedWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAxisExtendedWrap::GetDesiredFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDesiredFontSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisExtendedWrap::GetFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFontSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisExtendedWrap::GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelFormat();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisExtendedWrap::GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisExtendedWrap::GetPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAxisExtendedWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisExtendedWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	vtkAxisExtended * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAxisExtendedWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAxisExtendedWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAxisExtendedWrap *w = new VtkAxisExtendedWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAxisExtendedWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAxisExtended * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAxisExtendedWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkAxisExtendedWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAxisExtendedWrap *w = new VtkAxisExtendedWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisExtendedWrap::SetDesiredFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDesiredFontSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisExtendedWrap::SetFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFontSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisExtendedWrap::SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelFormat(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisExtendedWrap::SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisExtendedWrap::SetPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisExtendedWrap::Simplicity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							double r;
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							r = native->Simplicity(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							info.GetReturnValue().Set(Nan::New(r));
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAxisExtendedWrap::SimplicityMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAxisExtendedWrap *wrapper = ObjectWrap::Unwrap<VtkAxisExtendedWrap>(info.Holder());
	vtkAxisExtended *native = (vtkAxisExtended *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				double r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->SimplicityMax(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

