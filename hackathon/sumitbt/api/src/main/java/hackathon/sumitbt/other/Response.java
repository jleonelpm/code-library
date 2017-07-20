package hackathon.sumitbt.other;

public class Response
{
	private boolean success;
	
	private String message;
	
	public Response()
	{
		this.success = true;
		
		this.message = "Success";
	}

	public boolean isSuccess()
	{
		return success;
	}

	public void setSuccess(boolean success)
	{
		this.success = success;
	}

	public String getMessage()
	{
		return message;
	}

	public void setMessage(String message)
	{
		this.message = message;
	}
	
}
