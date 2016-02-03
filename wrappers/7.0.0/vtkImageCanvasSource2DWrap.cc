/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkImageCanvasSource2DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageCanvasSource2DWrap::ptpl;

VtkImageCanvasSource2DWrap::VtkImageCanvasSource2DWrap()
{ }

VtkImageCanvasSource2DWrap::VtkImageCanvasSource2DWrap(vtkSmartPointer<vtkImageCanvasSource2D> _native)
{ native = _native; }

VtkImageCanvasSource2DWrap::~VtkImageCanvasSource2DWrap()
{ }

void VtkImageCanvasSource2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageCanvasSource2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageCanvasSource2D").ToLocalChecked(), ConstructorGetter);
}

void VtkImageCanvasSource2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageCanvasSource2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageCanvasSource2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DrawCircle", DrawCircle);
	Nan::SetPrototypeMethod(tpl, "drawCircle", DrawCircle);

	Nan::SetPrototypeMethod(tpl, "DrawImage", DrawImage);
	Nan::SetPrototypeMethod(tpl, "drawImage", DrawImage);

	Nan::SetPrototypeMethod(tpl, "DrawPoint", DrawPoint);
	Nan::SetPrototypeMethod(tpl, "drawPoint", DrawPoint);

	Nan::SetPrototypeMethod(tpl, "DrawSegment", DrawSegment);
	Nan::SetPrototypeMethod(tpl, "drawSegment", DrawSegment);

	Nan::SetPrototypeMethod(tpl, "DrawSegment3D", DrawSegment3D);
	Nan::SetPrototypeMethod(tpl, "drawSegment3D", DrawSegment3D);

	Nan::SetPrototypeMethod(tpl, "FillBox", FillBox);
	Nan::SetPrototypeMethod(tpl, "fillBox", FillBox);

	Nan::SetPrototypeMethod(tpl, "FillPixel", FillPixel);
	Nan::SetPrototypeMethod(tpl, "fillPixel", FillPixel);

	Nan::SetPrototypeMethod(tpl, "FillTriangle", FillTriangle);
	Nan::SetPrototypeMethod(tpl, "fillTriangle", FillTriangle);

	Nan::SetPrototypeMethod(tpl, "FillTube", FillTube);
	Nan::SetPrototypeMethod(tpl, "fillTube", FillTube);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDefaultZ", GetDefaultZ);
	Nan::SetPrototypeMethod(tpl, "getDefaultZ", GetDefaultZ);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfScalarComponents", GetNumberOfScalarComponents);
	Nan::SetPrototypeMethod(tpl, "getNumberOfScalarComponents", GetNumberOfScalarComponents);

	Nan::SetPrototypeMethod(tpl, "GetScalarType", GetScalarType);
	Nan::SetPrototypeMethod(tpl, "getScalarType", GetScalarType);

	Nan::SetPrototypeMethod(tpl, "InitializeCanvasVolume", InitializeCanvasVolume);
	Nan::SetPrototypeMethod(tpl, "initializeCanvasVolume", InitializeCanvasVolume);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDefaultZ", SetDefaultZ);
	Nan::SetPrototypeMethod(tpl, "setDefaultZ", SetDefaultZ);

	Nan::SetPrototypeMethod(tpl, "SetDrawColor", SetDrawColor);
	Nan::SetPrototypeMethod(tpl, "setDrawColor", SetDrawColor);

	Nan::SetPrototypeMethod(tpl, "SetExtent", SetExtent);
	Nan::SetPrototypeMethod(tpl, "setExtent", SetExtent);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfScalarComponents", SetNumberOfScalarComponents);
	Nan::SetPrototypeMethod(tpl, "setNumberOfScalarComponents", SetNumberOfScalarComponents);

	Nan::SetPrototypeMethod(tpl, "SetRatio", SetRatio);
	Nan::SetPrototypeMethod(tpl, "setRatio", SetRatio);

	Nan::SetPrototypeMethod(tpl, "SetScalarType", SetScalarType);
	Nan::SetPrototypeMethod(tpl, "setScalarType", SetScalarType);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToChar", SetScalarTypeToChar);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToChar", SetScalarTypeToChar);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToDouble", SetScalarTypeToDouble);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToDouble", SetScalarTypeToDouble);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToFloat", SetScalarTypeToFloat);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToFloat", SetScalarTypeToFloat);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToInt", SetScalarTypeToInt);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToInt", SetScalarTypeToInt);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToLong", SetScalarTypeToLong);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToLong", SetScalarTypeToLong);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToShort", SetScalarTypeToShort);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToShort", SetScalarTypeToShort);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToUnsignedChar", SetScalarTypeToUnsignedChar);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToUnsignedChar", SetScalarTypeToUnsignedChar);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToUnsignedInt", SetScalarTypeToUnsignedInt);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToUnsignedInt", SetScalarTypeToUnsignedInt);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToUnsignedLong", SetScalarTypeToUnsignedLong);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToUnsignedLong", SetScalarTypeToUnsignedLong);

	Nan::SetPrototypeMethod(tpl, "SetScalarTypeToUnsignedShort", SetScalarTypeToUnsignedShort);
	Nan::SetPrototypeMethod(tpl, "setScalarTypeToUnsignedShort", SetScalarTypeToUnsignedShort);

	ptpl.Reset( tpl );
}

void VtkImageCanvasSource2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageCanvasSource2D> native = vtkSmartPointer<vtkImageCanvasSource2D>::New();
		VtkImageCanvasSource2DWrap* obj = new VtkImageCanvasSource2DWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageCanvasSource2DWrap::DrawCircle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->DrawCircle(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::DrawImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[2]))
			{
				VtkImageDataWrap *a2 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() > 6 && info[6]->IsInt32())
							{
								if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								native->DrawImage(
									info[0]->Int32Value(),
									info[1]->Int32Value(),
									(vtkImageData *) a2->native.GetPointer(),
									info[3]->Int32Value(),
									info[4]->Int32Value(),
									info[5]->Int32Value(),
									info[6]->Int32Value()
								);
								return;
							}
						}
					}
				}
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->DrawImage(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					(vtkImageData *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::DrawPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->DrawPoint(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::DrawSegment(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->DrawSegment(
						info[0]->Int32Value(),
						info[1]->Int32Value(),
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::DrawSegment3D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->DrawSegment3D(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::FillBox(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->FillBox(
						info[0]->Int32Value(),
						info[1]->Int32Value(),
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::FillPixel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->FillPixel(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::FillTriangle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->FillTriangle(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::FillTube(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						native->FillTube(
							info[0]->Int32Value(),
							info[1]->Int32Value(),
							info[2]->Int32Value(),
							info[3]->Int32Value(),
							info[4]->NumberValue()
						);
						return;
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageCanvasSource2DWrap::GetDefaultZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultZ();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageCanvasSource2DWrap::GetNumberOfScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfScalarComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageCanvasSource2DWrap::GetScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageCanvasSource2DWrap::InitializeCanvasVolume(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->InitializeCanvasVolume(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkImageCanvasSource2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	vtkImageCanvasSource2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageCanvasSource2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageCanvasSource2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageCanvasSource2DWrap *w = new VtkImageCanvasSource2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageCanvasSource2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageCanvasSource2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageCanvasSource2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageCanvasSource2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageCanvasSource2DWrap *w = new VtkImageCanvasSource2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::SetDefaultZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDefaultZ(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::SetDrawColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDrawColor(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDrawColor(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetDrawColor(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetDrawColor(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetDrawColor(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDrawColor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::SetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetExtent(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::SetNumberOfScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfScalarComponents(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::SetRatio(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRatio(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRatio(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetRatio(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::SetScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCanvasSource2DWrap::SetScalarTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToChar();
}

void VtkImageCanvasSource2DWrap::SetScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToDouble();
}

void VtkImageCanvasSource2DWrap::SetScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToFloat();
}

void VtkImageCanvasSource2DWrap::SetScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToInt();
}

void VtkImageCanvasSource2DWrap::SetScalarTypeToLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToLong();
}

void VtkImageCanvasSource2DWrap::SetScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToShort();
}

void VtkImageCanvasSource2DWrap::SetScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToUnsignedChar();
}

void VtkImageCanvasSource2DWrap::SetScalarTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToUnsignedInt();
}

void VtkImageCanvasSource2DWrap::SetScalarTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToUnsignedLong();
}

void VtkImageCanvasSource2DWrap::SetScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCanvasSource2DWrap *wrapper = ObjectWrap::Unwrap<VtkImageCanvasSource2DWrap>(info.Holder());
	vtkImageCanvasSource2D *native = (vtkImageCanvasSource2D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarTypeToUnsignedShort();
}
